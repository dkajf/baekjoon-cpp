#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Person {
    int age;
    string name;
    int order; // 가입한 순서
};

// 정렬 기준 함수
bool compare(const Person& a, const Person& b) {
    if (a.age != b.age)
        return a.age < b.age;           // 나이 오름차순
    else
        return a.order < b.order;       // 가입 순서 유지
}

int main() {
    int n;
    cin >> n;

    vector<Person> people;

    for (int i = 0; i < n; ++i) {
        Person p;
        cin >> p.age >> p.name;
        p.order = i;  // 입력 순서 저장
        people.push_back(p);
    }

    sort(people.begin(), people.end(), compare);

    for (const Person& p : people) {
        cout << p.age << " " << p.name << "\n";
    }

    return 0;
}


// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// class Member {
// private:
//     int age;
//     string name;
//     int order; // 가입 순서

// public:
//     Member(int a, string n, int o) : age(a), name(n), order(o) {}

//     int getAge() const { return age; }
//     string getName() const { return name; }
//     int getOrder() const { return order; }

//     // 정렬 기준을 위한 friend 함수
    // static bool compare(const Member& a, const Member& b) {
    //     if (a.age != b.age)
    //         return a.age < b.age;
    //     return a.order < b.order;
    // }

//     void print() const {
//         cout << age << " " << name << "\n";
//     }
// };

// int main() {
//     int n;
//     cin >> n;

//     vector<Member> members;

//     for (int i = 0; i < n; ++i) {
//         int age;
//         string name;
//         cin >> age >> name;
//         members.emplace_back(age, name, i);  // 생성자 사용
//     }

//     sort(members.begin(), members.end(), Member::compare);  // 정렬 기준 함수 지정

//     for (const Member& m : members) {
//         m.print();
//     }

//     return 0;
// }
