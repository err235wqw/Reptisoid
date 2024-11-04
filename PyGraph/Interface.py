from GraphStruct import Graph


def Console():
    exit = True
    fileOp = False
    while exit:
        if not fileOp:
            print("Введите путь до файла графа:"+'\n')
            filename = input()
            a = Graph(filename=filename, bool=False, orient=False)
            fileOp = True
            continue
        print("Какое действие хотите совершить? \n0) Просмотреть граф\n1)Добавить вершину\n2)Добавить ребро\n3)Удалить вершину\n4)Удалить ребро\n5)Сохранить граф в файл")
        match input():
            case "0":
                print(a.print_to_str())
            case "1":
                print("Введите вершину:")
                a.add_vertex(input())
            case "2":
                print("Введите вершину начала:")
                start = input()
                print("Введите вершину конца:")
                end = input()
                print("Введите вес ребра:")
                weight = input()
                a.add_edge(start,end,weight)
            case "3":
                print("Введите вершину:")
                a.remove_vertex(input())
            case "4":
                print("Введите вершину начала:")
                start = input()
                print("Введите вершину конца:")
                end = input()
                a.remove_edge(start,end)
            case "5":
                print("Введите название файла:")
                a.save_to_file(input())
            case "exit":
                exit = False
                print("Выполнение программы завершено")
                continue

