
#User function Template for python3

class Solution:
    def subLinkedList(self, l1, l2): 
        # Code here
        # return head of difference list
        def removeInitialZeroes(head):
            while head:
                if head.data==0:
                    head=head.next
                else:
                    return head
            return head
            
        def lenList(head):
            length = 0
            while head:
                length+=1
                head = head.next
            return length 
            
        def sortList(l1,l2):
            if lenList(l1)>lenList(l2):
                return l1, l2
            elif lenList(l1)<lenList(l2):
                return l2, l1
            else:
                while l1: 
                    if l1.data>l2.data:
                        return l1, l2
                    elif l1.data<l2.data:
                        return l2, l1
                    l1 = l1.next
                    l2 = l2.next
                return l1,l2
                    
        def reverse(head):
            prev = None
            while head:
                new = head.next
                head.next = prev
                prev = head
                head = new
            return prev
        
        l1 = removeInitialZeroes(l1)
        l2 = removeInitialZeroes(l2)
        l1,l2 = sortList(l1,l2)
        l1 = reverse(l1)
        l2 = reverse(l2)
        carry = 1
        ans = l1
        while l1:
            sum = l1.data+9+carry
            if l2:
                sum-=l2.data
                l2 = l2.next
            l1.data = sum%10
            carry = sum//10
            l1 = l1.next
        ans = removeInitialZeroes(reverse(ans))
        if not ans:
            return Node(0)
        return ans
        






#{ 
 # Driver Code Starts
#Initial Template for Python 3

# Node Class
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Linked List Class
class LinkedList:
    def __init__(self):
        self.head = None
        self.tail = None

    # creates a new node with given value and appends it at the end of the linked list
    def insert(self, val):
        if self.head is None:
            self.head = Node(val)
            self.tail = self.head
        else:
            self.tail.next = Node(val)
            self.tail = self.tail.next

# prints the elements of linked list starting with head
def printList(n):
    while n:
        print(n.data,end='')
        n = n.next
    print()

if __name__ == '__main__':
    for _ in range(int(input())):
        
        n = int(input())
        arr1 = ( int(x) for x in input() )
        LL1 = LinkedList()
        for i in arr1:
            LL1.insert(i)
        
        m = int(input())
        arr2 = ( int(x) for x in input() )
        LL2 = LinkedList()
        for i in arr2:
            LL2.insert(i)
        
        ob = Solution()
        res = ob.subLinkedList(LL1.head, LL2.head)
        printList(res)
# } Driver Code Ends
