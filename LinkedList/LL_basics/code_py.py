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

def insert_head(head, new_val):
    new_head = Node(new_val)
    new_head.ptr = head
    return new_head

n0 = insert_head(n1, 5)

print_LL(n0)


def insert_tail(head, new_val):
    curr = head
    new = Node(new_val)
    if head is None:
        return new
    while curr.ptr is not None:
        curr = curr.ptr

    curr.ptr = new
    return head

n0 = insert_tail(n0, 40)
print_LL(n0)
