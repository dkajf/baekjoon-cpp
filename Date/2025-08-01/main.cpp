    #include <iostream>
    #include <algorithm>
    #include <vector>

    using namespace std;

    class member {
        private:
        int age;
        string name;
        int order;

        public:
        member(int a, string n, int o) : age(a), name(n), order(o) {}

        int getAge() const { return age; }
        string getName() const { return name; }
        int getOrder() const { return order;}

        static bool compare(const member& a, const member& b) {
            if (a.age != b.age) {
                return a.age < b.age;}
            return a.order < b.order;
        }

        void print() const{
            cout << age << " " << name << "\n";
        }
    };

    int main() {

        int n;
        cin >> n;

        vector<member> members;

        for(int i = 0; i < n; ++i){

            int age;
            string name;

            cin >> age >> name;

            members.emplace_back(age, name, i);
        }

        sort(members.begin(), members.end(), member::compare);

        for(const member& m : members){
            m.print();
        }

        return 0;

    }