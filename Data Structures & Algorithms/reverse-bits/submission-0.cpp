class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
      uint32_t sm=0, cnt=31;
      for(int i=0;i<32;i++)
      {
        if((n&(1<<i))!=0)
        {
          sm=sm|(1<<(cnt-i));
        }
      }
      return sm;

    }
};
