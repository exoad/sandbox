class MyLinkedList {
    static class Node {
        int val;
        Node next;
        
        Node(int val, Node next) {
            this.val = val;
            this.next = next;
        }
        
        Node(int val) {
            this(val, null);
        }
    }
    Node head;

    public MyLinkedList() {
        head = null;
    }
    
    public int get(int index) {
        var i = 0;
        var ptr = head;
        while(ptr != null) {
            if(i == index) {
                return ptr.val;
            }
            ptr = ptr.next;
            i++;
        }
        return -1;
    }
    
    public void addAtHead(int val) {
        head = new Node(val, head);
    }
    
    public void addAtTail(int val) {
        if(head == null) {
            addAtHead(val);
            return;
        }
        var ptr = head;
        while(ptr.next != null) {
            ptr = ptr.next;
        }
        ptr.next = new Node(val, null);
    }
    
    public void addAtIndex(int index, int val) {
        if(index == 0) {
            addAtHead(val);
            return;
        }
        var i = 0;
        var ptr = head;
        while(ptr != null && i < index - 1) {
            ptr = ptr.next;
            i++;
        }
        if(ptr != null) {
            ptr.next = new Node(val, ptr.next);
        } 
    }
    
    public void deleteAtIndex(int index) {
        if(head == null) {
            return;
        }
        if(index == 0) {
            head = head.next;
            return;
        } 
        var i = 0;
        var ptr = head;
        while(ptr != null && i < index - 1) {
            ptr = ptr.next;
            i++;
        }
        if(ptr != null && ptr.next != null) {
            ptr.next = ptr.next.next;
        }
    }
}

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList();
 * int param_1 = obj.get(index);
 * obj.addAtHead(val);
 * obj.addAtTail(val);
 * obj.addAtIndex(index,val);
 * obj.deleteAtIndex(index);
 */
