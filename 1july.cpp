class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
    //   int m;                     TLE DE RHa
    //     int cnt=0;
    //     while(N){
    //      m = N%2;
    //     if(m==1){cnt++; 
    //         N/=2;
    //     }}
                              
                              //app 1                  // while(N){
                                                //     cnt++;
                                                //     N=N&(N-1);
                                                // }
                                                  
                                                                    //   int cnt=0;
                               //app 2                                       
                                                                    //   while(N>0){
                                                                    //       if(N&1==1)cnt++;
                                                                    //       N=N>>1;
                                                                    //   }
                                                                    
                                                                
                                                                    //     return cnt;
       int res = 0;
        while (N > 0) {
            // Check if the last bit is set or not
            if (N % 2 != 0)
                res++;
            // Remove the last bit
            N = N / 2;
        }      return res;  
    }
};
