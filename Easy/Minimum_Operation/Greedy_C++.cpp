class Solution
{
  public:
    int minOperation(int n)
    {
        int operation =0; 
        
        while(n > 0){
            if(n%2 == 0)
                n = n/2;
            else n--;
            operation++;

        }
        return operation;
    }
};
