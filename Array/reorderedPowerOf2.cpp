class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string num=to_string(n);//conert n to string
            
            sort(num.begin(),num.end());//sort the string num
            
            for(int i=0;i<31;i++){
                    long int n1=pow(2,i); //calculate power of 2 
                    string curr=to_string(n1); //convert it into string 
                    
                    sort(curr.begin(),curr.end()); //sort the values in power of two
                    
                    if(curr==num){  // compare both the string if equal return true
                            return true;
                    }
            }
            return false;//else return false
    }
};