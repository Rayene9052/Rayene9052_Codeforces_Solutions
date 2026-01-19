#include<iostream>
#include<algorithm>
#include<vector>    
using namespace std;
int main()
        {
                int senja_sum=0;
                int dima_sum=0;
                bool senja_turn = true;
                int n;
                cin>>n;
                vector<int> cards_numbers(n);  
                for (int i=0;i<n;i++)
                {
                    cin>>cards_numbers[i];
                }

                while (!cards_numbers.empty())  
                {
                    if (cards_numbers[0]>=cards_numbers[cards_numbers.size()-1] && senja_turn)
                    {
                        senja_sum+=cards_numbers[0];
                        cards_numbers.erase(cards_numbers.begin());
                        senja_turn = false;
                    }
                    else if (cards_numbers[0]>=cards_numbers[cards_numbers.size()-1] && !senja_turn)
                    {
                        dima_sum+=cards_numbers[0];
                        cards_numbers.erase(cards_numbers.begin());
                        senja_turn = true;
                    }
                    else if (cards_numbers[0]<=cards_numbers[cards_numbers.size()-1] && senja_turn)
                    {
                        senja_sum+=cards_numbers[cards_numbers.size()-1];
                        cards_numbers.pop_back();
                        senja_turn = false;
                    }
                    else if (cards_numbers[0]<=cards_numbers[cards_numbers.size()-1] && !senja_turn)
                    {
                        dima_sum+=cards_numbers[cards_numbers.size()-1];
                        cards_numbers.pop_back();
                        senja_turn = true;
                    }
                
                }
                
                
                
            cout<<senja_sum<<" "<<dima_sum<<endl;
        }