using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace n_21_2
{
    internal class BinaryTree
    {
        private class Node
        {
            public object inf;
            public Node left;
            public Node right;

            public Node(object nodeInf)
            {
                inf = nodeInf;
                left = null;
                right = null;
            }

            public static void Add(ref Node r, object nodeInf)
            {
                if (r == null)
                {
                    r = new Node(nodeInf);
                }
                else
                {
                    if (((IComparable)(r.inf)).CompareTo(nodeInf) > 0)
                    {
                        Add(ref r.left, nodeInf);
                    }
                    else
                    {
                        Add(ref r.right, nodeInf);
                    }
                }
            }
            public static void Preorder(Node r)
            {
                if (r != null)
                {
                    Console.Write("{0} ", r.inf);
                    Preorder(r.left);
                    Preorder(r.right);
                }
            }
            public static void Inorder(Node r)
            {
                if (r != null)
                {
                    Inorder(r.left);
                    Console.Write("{0} ", r.inf);
                    Inorder(r.right);
                }
            }
            public static void Postorder(Node r)
            {
                if (r != null)
                {
                    Postorder(r.left);
                    Postorder(r.right);
                    Console.Write("{0} ", r.inf);
                }
            }
            public static void Function(Node r, ref List<object> cnt, int depth, int goal)
            {
                if (r != null)
                {  
                    Console.Write("{0} ", r.inf);
                    if (depth == goal)
                    {
                        cnt.Add(r.inf);
                    }
                    else
                    {
                        Function(r.left, ref cnt, depth + 1, goal);
                        Function(r.right, ref cnt, depth + 1, goal);
                    }
                }
            }
            public static void Search(Node r, object key, out Node item)
            {
                if (r == null)
                {
                    item = null;
                }
                else
                {
                    if (((IComparable)(r.inf)).CompareTo(key) == 0)
                    {
                        item = r;
                    }
                    else
                    {
                        if (((IComparable)r.inf).CompareTo(key) > 0)
                        {
                            Search(r.left, key, out item);
                        }
                        else
                        {
                            Search(r.right, key, out item);
                        }
                    }
                }
            }
            private static void Del(Node t, ref Node tr)
            {
                if (tr.right != null)
                {
                    Del(tr, ref tr.right);
                }
                else
                {
                    t.inf = tr.inf;
                    tr = tr.left;
                }
            }
            public static void Delete(ref Node t, object key)
            {
                if (t == null)
                {
                    throw new Exception("Это значение отсутствует в дереве");
                }
                else
                {
                    if (((IComparable)(t.inf)).CompareTo(key) > 0)
                    {
                        Delete(ref t.left, key);
                    }
                    else
                    {
                        if (((IComparable)(t.inf)).CompareTo(key) < 0)
                        {
                            Delete(ref t.right, key);
                        }
                        else
                        {
                            if (((IComparable)(t.inf)).CompareTo(key) < 0)
                            {
                                Delete(ref t.right, key);
                            }
                            else
                            {
                                if (t.left == null)
                                {
                                    t = t.right;
                                }
                                else
                                {
                                    if (t.right == null)
                                    {
                                        t = t.left;
                                    }
                                    else
                                    {
                                        Del(t, ref t.left);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        Node tree;
        public object Inf
        {
            set { tree.inf = value; }
            get { return tree.inf; }
        }
        public BinaryTree()
        {
            tree = null;
        }
        private BinaryTree(Node r)
        {
            tree = r;
        }
        public void Add(object nodeInf)
        {
            Node.Add(ref tree, nodeInf);
        }
        public void Preorder()
        {
            Node.Preorder(tree);
        }
        public void Inorder()
        {
            Node.Inorder(tree);
        }
        public void Postorder()
        {
            Node.Postorder(tree);
        }
        public void Function(ref List<object> cnt, int goal)
        {
            Node.Function(tree, ref cnt, 0, goal);
        }
        public BinaryTree Search(object key)
        {
            Node r;
            Node.Search(tree, key, out r);
            BinaryTree t = new BinaryTree(r);
            return t;
        }
        public void Delete(object key)
        {
            Node.Delete(ref tree, key);
        }

    }
}
