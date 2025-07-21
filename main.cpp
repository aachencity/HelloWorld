#include <iostream>
#include <vector>

using namespace std;

void sort(vector<int> &nums)
{
    for(int sortedIndex = 0; sortedIndex < nums.size(); sortedIndex++)
    {
        int minIndex = sortedIndex;
        for(int i = minIndex; i < nums.size(); i++)
        {
            if(nums[i] < nums[minIndex])
            minIndex = i;
        }
        swap(nums[minIndex], nums[sortedIndex]);
    }
}

int main()
{
    srand(time(NULL));
    vector<int> data;
    cout << "排序前的原始数据: ";
    for (int i = 0; i < 10; ++i)
    {
        data.push_back(rand() % 100);
        cout << data.back() << " ";
    }
    cout << endl;
    sort(data);
    cout << "排序之后的数据: ";
    for (const auto& item : data)
    {
        cout << item << " ";
    }
    cout << endl;
    return 0;
}