#include <bits/stdc++.h>
using namespace std;
int main()
{
    // pair<int,string> p;
    // p.first=1;
    // p.second="abc";
    // cout<<p.first<<" "<<p.second<<endl;
    // pair <int,string> p1(2,"xyz");
    // pair <int,string> p2(p1);
    // pair<int,int> p_array[3];
    // p_array[0]={1,2};
    // p_array[1]={3,4};
    // p_array[2]={5,6};
    // swap(p_array[0],p_array[1]);
    // for(int i=0;i<3;i++)
    // {
        // cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    // }
    // pair<int,int> p_array[3]={{1,2},{3,4},{5,6}};
    // vector<int> v;
    // v.push_back(1);
    // v.emplace_back(2);
    // for(auto i:v)
    // {
        // cout<<i<<endl;
    // }
    // vector<int> v(10);//vector<int> v(10,1);
    // v.push_back(1);
    // v.push_back(2);
    // v.pop_back();
    // vector <int>v2=v; //O(n)
    //pass by reference to save time and space in vectors &v
    // vector <pair<int,int>> v={{1,2},{3,4},{5,6}};
    // for(auto &i:v)
    // {
    //     i.first+=1;
    //     i.second+=1;
    // }
    // for(auto i:v)
    // {
        // cout<<i.first<<" "<<i.second<<endl;
    // }
    // vector<int> v[10];// vector of arrays
    // vector<vector<int>> v;//vector of vectors
    // v.push_back({1,2,3});
    // for(auto i:v)
    // {
    //     for(auto j:i)
    //     {
            // cout<<j<<" ";
    //     }
        cout<<endl;
    // }
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    vector<int> :: iterator it=v.begin();
    cout<<*it<<endl;
    // it++;
    cout<<*it<<endl;
    // for(it=v.begin();it!=v.end();it++)
    // {
        cout<<*it<<" ";
    // }
    // (*it).first for pair iterator or (it->first) for map iterator
    // for(auto &i:v)
    // {
    //     i++;//reference to the value increasing everyone by 1
    // }
    // for(auto i:v)
    // {
        // cout<<i<<" ";
    // }
    //maps
    // map<int,string> m;//sorted by key
    // m[1]="abc";//O(logN)
    // m[2]="xyz";
    // m[3]="pqr";
    // m[4]="lmn";
    // m.insert({5,"opq"});
    // m.insert(make_pair(6,"stu"));
    // auto it = m.find(1);//iterator //O(logN)
    // m.erase(it);//O(logN)
    // if(it != m.end()) then use m.erase
    // unordered_map<int,string> m;//unsorted //O(1)
    // u can't insert pair as a key in unordered map whereas u can do the same in map
    // multimap<int,string> m;//sorted by key u can put duplicates in it
    // sets
    // set<int> s;//sorted by key , only unique values
    // s.insert(1);
    // auto it = s.find(1);//it can take both iterator and string in find//O(logN)
    // unordered_set<int> s;//unsorted //O(1)
    // multiset<int> s;//sorted by key u can put duplicates in it
    // u can use multiset in place of priority queue
    // iterator delete only one element in multiset whereas string can delete all with the same string
    // unordered_multiset<int> s;//unsorted //O(1)
    // sort(arr, arr+3, comp); 
    // bool comp(int el1, int el2) {
	// if(el1 <= el2) {
	// 	return true; 
	// }
	// return false; 
    // }
    // iterators 
	// begin(), end(), rbegin(), rend() 
    // size 
	// cout << arr.size(); 
 
	// front 
	// cout << arr.front(); // arr.at(0); 
 
	// back
	// cout << arr.back(); // arr.at(arr.size() - 1); 
    // vector<int> raj;
	// raj.push_back(1); // raj.emplace_back(1); // emplace_back takes lesser time than push back 
	// raj.push_back(3); 
	// raj.push_back(2); 
	// raj.push_back(5); // -> {1, 3, 2, 5} 
 
	// vector<int> raj1(raj.begin(), raj.begin() + 2);  // -> {1, 3} 
    // define 10 x 20 
	// vector<vector<int>> vec(10, vector<int> (20, 0)); 
    // st -> {1, 2, 5}
	// erase functionality 
	// log n 
	// st.erase(st.begin()); // st.erase(iterator) // st -> {2, 5}
 
	// // log n 
	// // 77777777777
	// st.erase(st.begin(), st.begin() + 2); // -> [)
	// // st.erase(startIterator, endIterator) 
 
	// st.erase(5) // st.erase(key) // delete the 5 -> {1, 2}
    // mpp.clear(); // entire map is cleaned up
    // COMPARATOR 
    // sort(arr, arr+n); // sorts everything in ascending order
    // sort(arr, arr+n, comp); 
 
 
    // // descending 
    // sort(arr, arr+n, comp); 
    // // greater<int> is an inbuilt comparator
    // // which works only if you wanna do this in descending 
    // sort(arr, arr+n, greater<int>); 
    // s==t u can directly compare sets like this
    
    return 0;
}
