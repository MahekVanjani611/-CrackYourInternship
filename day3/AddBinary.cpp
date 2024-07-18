class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";

        int carry = 0;
  
        int i = a.size() - 1;
        int j = b.size() - 1;
        
   
        while (i >= 0 || j >= 0 || carry) {
           
            int sum = carry;
            if (i >= 0) {
                sum += a[i] - '0';
                cout<<sum<<endl;
                i--;
            }
            if (j >= 0) {
                sum += b[j] - '0';
                cout<<sum<<endl;
                j--;
            }
         
            result = char(sum % 2 + '0') + result;
            carry = sum / 2;
        }
        
        return result;
    }
};
