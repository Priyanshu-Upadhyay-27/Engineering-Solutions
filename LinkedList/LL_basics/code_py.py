class Node:
    def __init__(self, val):
        self.val =  val
        self.ptr = None

n1 = Node(10)
n2 = Node(20)
n3 = Node(30)

n1.ptr = n2
n2.ptr = n3

print(n1.val, n2.val, n1.ptr, n2.ptr)

def print_LL(head):
    curr = head
    while curr is not None:
        print(curr.val, end = " ")
        curr = curr.ptr
    print()

print_LL(n1)