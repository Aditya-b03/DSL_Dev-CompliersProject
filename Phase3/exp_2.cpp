#include "iostream"
#include "vector"
#include "map"
#include "set"
#include "teamScibe.h"
using namespace std;

// // generate random ID - done
// string character_string = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
// string gen_ID()
// {

//     string s = "";
//     for (int i = 0; i < 10; i++)
//     {
//         s += character_string[rand() % 62];
//     }
//     return s;
// }

// class member;
// map<string, member *> member_map;

// class member{
//     public:
//     string member_name;
//     string member_ID;

//     member(){
//         member_name = "random name";
//         member_ID = gen_ID();
//         member_map[member_ID] = this;
//     }

//     void update(map<string, string> info){
//         member *m = member_map[member_ID];
//         member_name = info["name"];
//         m->member_name = info["name"];
//     }
// };



// class team
// {
// public:
//     string team_name;
//     int team_ID;
//     vector<member *> members;

//     team()
//     {
//         team_name = "random name";
//         team_ID = 0;
//     }

//     void add_member(member m)
//     {
//         members.push_back(member_map[m.member_ID]);
//     }
// };

// member create_member(){
//     member *m1 = new member();
//     cout << m1->member_ID << endl;
//     return *m1;
// }



// team create_team(){
//     team t1 = team();
//     return t1;
// }


int main(){
    // team t1 = create_team();
    // cout << t1.team_name << endl;
    // cout << t1.team_ID << endl;

    // member m1 = create_member();
    // cout << m1.member_name << endl;
    // cout << m1.member_ID << endl;

    // t1.add_member(m1);


    // m1.update({{"name","new name"}});
    
    // cout << m1.member_name << endl;
    // cout << t1.members[0]->member_name << endl;
    team t1 = create_team();

    date d = date(3, 4, 2023);
    event e = create_event("Title", "Description", d);

    
    cout << "here" << endl;
    vector<member> v;
    for(int i = 0; i < 3; i++){
        v.push_back(create_member("member" + to_string(i)));
    }

    vector<team> t;
    for(int i = 0; i < 3; i++){
        t.push_back(create_team("team" + to_string(i)));
    }
    cout << "here" << endl;
    t1.insert(v);
    team t2 = create_team("team2");
    t1.insert(t2);

    task tsk = create_task();
    tsk + v[0];
    tsk + v[1];
    tsk.assign_to(v[0]);
    tsk.assign_to(v[1]);
    cout << "here" << endl;
    jsonOutput(t1);
    showCalendar(t1);
    

    cout << team_map.size() << endl;
    cout << member_map.size() << endl;
    cout << task_map.size() << endl;

    member m1 = create_member("member100");
    t1.insert(m1);
    jsonOutput(m1);
    jsonOutput(tsk);

}