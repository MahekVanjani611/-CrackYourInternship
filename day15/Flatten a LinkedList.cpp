Node* flatten(Node* head){
    vector<int> arr;
    while (head != nullptr) {
 
        Node* t2 = head;
        while (t2 != nullptr) {
            arr.push_back(t2->data);
           
            t2 = t2->bottom;
        }

        head = head->next;
    }

    sort(arr.begin(), arr.end());
    Node* dummy=new Node(-1);
    Node* cur=dummy;
   for(int i=0;i<arr.size();i++){
        dummy->bottom=new Node(arr[i]);
        dummy=dummy->bottom;
    }
return cur->bottom;
    // Convert the sorted array
}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        vector<int> work;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            work.push_back(number);
        }
        n = work.size();

        Node *head = NULL;
        Node *pre = NULL;

        for (int i = 0; i < n; i++) {
            int m = work[i] - 1;
            int data;
            cin >> data;
            Node *temp = new Node(data);
            if (head == NULL) {
                head = temp;
                pre = temp;
            } else {
                pre->next = temp;
                pre = temp;
            }

            Node *preB = temp;
            for (int j = 0; j < m; j++) {
                int temp_data;
                cin >> temp_data;
                Node *tempB = new Node(temp_data);
                preB->bottom = tempB;
                preB = tempB;
            }
        }

        Solution ob;
        Node *root = ob.flatten(head);
        printList(root);
    }
    return 0;
}

// } Driver Code Ends
