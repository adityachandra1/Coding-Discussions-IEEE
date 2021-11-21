//Aditya Chandra
#include <bits/stdc++.h>
//basic snip
using namespace std;

string mostBooked(vector<string> room_queries){
   map <string, int> booking_count;
   int total_room_queries = room_queries.size();
   for(int i = 0 ; i < total_room_queries ; i++)
       if(room_queries[i][0] == '+') booking_count[room_queries[i]]++;

    int maxBooking = INT_MIN;
    string mostBookedRoom;
    for(auto room : booking_count){
        if(room.second > maxBooking){
            mostBookedRoom = room.first.substr(1);
            maxBooking = room.second;
        }
    }
    return mostBookedRoom;
}

int main() {
    int total_room_queries;
    cin >> total_room_queries;
    vector<string> room_queries(total_room_queries);
    for(int i = 0 ; i < total_room_queries ; i++){
        cin >> room_queries[i];
    }
    cout << mostBooked(room_queries) << endl;
}