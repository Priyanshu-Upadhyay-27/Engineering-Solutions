class Node:
    def __init__(self, val):
        self.val =  val
        self.ptr = None
# Built a Node class to make objects of Node later for the Linked List.
# In python, every variable is a refrence to an object. 
# Ex: x = 10, now x points to an object "10" which is present somehere in the memory.
# Now if y = 10, then y also points to that same "10" with no new creation of 10, unlike cpp.

n1 = Node(10) # node object created with val 10, and n1 variable refrencing to it.
n2 = Node(20)
n3 = Node(30)

n1.ptr = n2 # since n2 is a refrence, now n1 ka ptr is pointing to n2. Nodes linked.
n2.ptr = n3

print(n1.val, n2.val, n1.ptr, n2.ptr)

def print_LL(head):
    curr = head
    while curr is not None: # loop stops when curr pass through the tail node. 
        print(curr.val, end = " ")
        curr = curr.ptr
    print()
print_LL(n1)
# In this we print LL, by traversing each node, since head is required to start with a LL.
# We take head and do curr = head, which doesnt create another node, we created a new variable
# curr, which points to head, now we work with curr and not head, so that it remains accesible later.


def insert_head(head, new_val):
    new_head = Node(new_val)
    new_head.ptr = head
    return new_head
n0 = insert_head(n1, 5)
print_LL(n0)
# In this, we first create a node with the Node class, then change the by defualt value of
# ptr from None to head i.e. we pointed new head to the older head and return that new head.



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
# Now this time we need to insert the node at the end, now we have head(only info about a LL),
# So we use head and traverse till curr.ptr = None. With this, we reach the end node, now,
# we just have to change the ptr variable of last node object and make it point towards the
# new node just made and at last return head. 

def length(head):  # This function count nodes.
    curr = head 
    count = 0
    while curr is not None: # traversing till the last node
        curr = curr.ptr
        count += 1 # adding +1 with each node traversal
    return count

def search(head, key): # this function finds a key and returns it, if not found then return false
    curr = head
    count = 0
    while curr is not None: 
        if curr.val == key:
            return count
        curr = curr.ptr
        count += 1
    return False

len = length(n0)
key_index = search(n0, 20)
print(f"Length of the Linked List: {len}, Key Index: {key_index}")

def delete_node(head, valD): # this function delete a node, from any part of the linked list. 
    curr = head
    if head is None: # base case: if head doesnt exists. 
        return None
    if head.val == valD: # if head value matches the deletion value.
        return head.ptr
    
    while curr.ptr is not None: # traversal till end node, not pass through it
        if curr.ptr.val == valD: # we are on current node and if we found that the next node
            # Each . means "follow this name into the object, and take what is stored there." 
            curr.ptr = curr.ptr.ptr # then we just repoint the arrow of current node to the next to next node
            curr.ptr.ptr = None # optional: rewiring the the next to next pointing to none, so that pointer doesnt point in our LL
            break
        curr = curr.ptr # traversal
    return head

n0 = delete_node(n0, 20)
print("New list after deletion: ")
print_LL(n0)

n0 = insert_head(n0, 1)
n0 = insert_tail(n0, 40)
print_LL(n0)

def reverse_LL(head): # function to reverse linked list, just reversing the arrows direction.
    curr = head 
    prev = None # using two variables for swapping the direction. 
    nxt = None
    while curr is not None:
        nxt = curr.ptr # first store the initial pointing from curr to the next node 
        curr.ptr = prev # now reassign the initial pointing to None for the first iteration, and later, it contains the previous node or the intial node pointing.
        prev = curr # now just update the prev to current as for the next iter, it will be a previous node
        curr = nxt # since 

