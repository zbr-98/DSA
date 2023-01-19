void push(int x){
            queue<int> q2;
            while(!q.empty()){
                  q2.push(q.front());
                  q.pop();
            }
            q.push(x);
            while(!q2.empty()){
                  q.push(q2.front());
                  q2.pop();
            }
      }