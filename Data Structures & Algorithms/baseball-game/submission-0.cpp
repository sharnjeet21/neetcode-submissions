#include<vector>
#include<string>


class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        int res = 0;

        for(string& op : operations){
            if(op == "+"){
                record.push_back(record[record.size() - 1] + record[record.size() - 2]);
            }

            else if(op == "D"){
                record.push_back(record[record.size() - 1] * 2);
            }

            else if(op == "C"){
                record.pop_back();
            }
            else{
                record.push_back(stoi(op));
            }
        }

        for(int i = 0; i < record.size(); i++){
            res += record[i];
        }

        return res;
    }
};