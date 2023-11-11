    vector<int> insertAT(vector<int> &V, int val) {
      int len = V.size(); 
      if((len == 0) || (V[len-1] <= val)) {
        V.push_back(val); return V;
      }

      int last = V[len-1]; 
      V.pop_back(); 
      insertAT(V, val);
      V.push_back(last);
      return V;
    }

    vector<int> sortArray(vector<int> &V) {
      if(V.size() == 1) return V;

      int last = V[V.size() - 1];
      V.pop_back();
      vector<int> temp = sortArray(V);
      vector<int> sorted = insertAT(temp, last);
      return sorted;
    }
