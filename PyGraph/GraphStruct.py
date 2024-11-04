from __future__ import annotations


class Graph:
    def __init__(self, filename: str = None, original: Graph = None, orient: bool = True, bool: bool = False) -> None:
        self.__smej = dict(dict())
        self.__vertex = set()
        self.__orient = orient
        self.__bool = bool
        if filename != None:
            self.load_from_file(filename, orient, bool)
            return
        if original != None:
            self.copy_from_object

    def load_from_file(self, filename: str, orient: bool, bool: bool) -> None:
        with open(filename) as file:
            lines = [line.split() for line in file]
        # Изолированная вершина
        for line in lines:
            if len(line)== 1:
                self.__smej[line[0]] = {}
                self.__vertex.add(line[0])
                continue
            if line[0] not in self.__vertex:
                # Если еще не создана вершина
                self.__smej[line[0]] = {}
                self.__vertex.add(str(line[0]))

            
            if line[1] not in self.__vertex:
                # Если еще не создана вершина
                self.__smej[line[1]] = {}
                self.__vertex.add(str(line[1]))

            self.__smej[line[0]][line[1]] = 1 if bool else int(line[2]) #словарь словарей, где первый словарь за первую вершину, а второй за вторую(ее вес)
            if not orient:
                self.__smej[line[1]][line[0]] = 1 if bool else int(line[2])
    def copy_from_object(self, object: Graph) -> None:
        temp = {}
        for i in object.__vertex:
            temp[i] = dict(object.__smej[i])
        self.__smej = temp
        self.__vertex = set(object.__vertex)

    def add_vertex(self, vertex: str) -> None:
        if vertex not in self.__smej:
            self.__smej[vertex] = {}
            self.__vertex.add(vertex)
    
    def add_edge(self, vertex_start: str, vertex_end: str, edge_weight: int = 0) -> None:
        if vertex_end not in self.__vertex or vertex_start not in self.__vertex:
            # Тогда вызываем ошибку
            raise ValueError("Как минимум одна из вершин не существует.")
        else:
            # Переобозначим вес:
            self.__smej[vertex_start][vertex_end] = 1 if self.__bool else edge_weight
            if(not self.__orient):
                self.__smej[vertex_end][vertex_start] = 1 if self.__bool else edge_weight
                

    def remove_vertex(self, vertex: str) -> None:
        if vertex not in self.__vertex:
            raise ValueError("Вершина не существует.")
        for ver in self.__vertex:
            if vertex in self.__smej[ver]:
                del self.__smej[ver][vertex]
        self.__vertex.remove(vertex)
        del self.__smej[vertex]
    

    def remove_edge(self, start: str, end: str) -> None:
        if start not in self.__vertex or end not in self.__vertex:
            raise ValueError("Как минимум одна вершина не существует.")
        if end not in self.__smej[start]:
            raise ValueError("Ребро не существует.")
        else:
            del self.__smej[start][end]
            if self.__orient:
                del self.__smej[end][start]

    def __str__(self) -> str:
        answ = ''
        for start in self.__vertex:
            for end in self.__vertex:
                if end in self.__smej[start]:
                    answ += start + ' ' + end + ' ' + str(self.__smej[start][end])+'\n'
            if self.__smej[start] == {}:
                asnw += start + '\n'
        return answ

    def save_to_file(self, filename) -> None:
        with open(filename, "w") as file:
            file.write(str(self))
            
    def print_to_str(self) -> str:
        answ = ''
        for start in self.__vertex:
            answ += start
            for end in self.__vertex:
                if end in self.__smej[start]:
                    answ += ' ' + end + ' (' + str(self.__smej[start][end]) + ') '
            answ += '\n'
        return answ