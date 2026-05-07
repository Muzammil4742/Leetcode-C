class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> final;
        int n = asteroids.size();
        int top=0;
        final.push(asteroids[0]);
        for(int i = 1; i < n; i++)
        {
            if(final.empty() || 
               (final.top() > 0 && asteroids[i] > 0 ) || 
               (final.top() < 0 && asteroids[i] < 0 ) ||
               (final.top() < 0 && asteroids[i] > 0 ))
            {
                top++;
                final.push(asteroids[i]);
            }
            else
            {
                while(!final.empty() && final.top() > 0 && asteroids[i] < 0)
                {
                    int tem = final.top();
                    if(abs(tem) > abs(asteroids[i]))
                    {
                        asteroids[i] = tem;
                        break;
                    }
                    else if(abs(tem) == abs(asteroids[i]))
                    {
                        final.pop();
                        asteroids[i] = 0;
                        break;
                    }
                    else
                    {
                        final.pop();
                    }
                }

                if(asteroids[i] != 0 && (final.empty() || final.top() < 0))
                {
                    final.push(asteroids[i]);
                }
            }
        }

        vector<int> ans(final.size());
        for(int i = final.size() - 1; i >= 0; i--)
        {
            ans[i] = final.top();
            final.pop();
        }
        return ans;
    }
};