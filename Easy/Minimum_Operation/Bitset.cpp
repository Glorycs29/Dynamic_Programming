class Solution {
public:
    int minOperation(int n) {
        // Create a bitset of size 32 (since it's a 32-bit integer) and initialize it with the binary representation of n
        bitset<32> b(n);
        
        int c = 0; // Counter for counting set bits
        int m = 0; // Variable to hold the position of the leftmost set bit
        
        // Iterate through the bits from the 32nd bit (MSB) to the 0th bit (LSB)
        for (int i = 31; i >= 0; i--) {
            // If the current bit is 1 (i.e., set)
            if (b[i] == 1) {
                c++; // Increment the count of set bits
                m = max(i, m); // Update the position of the leftmost set bit
            }
        }
        
        // Return the minimum number of operations required (count of set bits + position of leftmost set bit)
        return (c + m);
    }
};
