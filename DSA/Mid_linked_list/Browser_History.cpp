#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<string> list;
    string s;
    while (cin >> s && s != "end")
    {
        list.push_back(s);
    }
    int q;
    cin >> q;
    cin.ignore();
    auto current = list.begin();
    while (q--)
    {
        string line;
        getline(cin, line);
        stringstream ss(line);
        string do_work, arg;
        ss >> do_work;
        if (do_work == "visit")
        {
            ss >> arg;
            bool found = false;
            for (auto it = list.begin(); it != list.end(); ++it)
            {
                if (*it == arg)
                {
                    current = it;
                    cout << *current << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Not Available" << endl;
            }
        }
        else if (do_work == "next")
        {
            auto temp = current;
            ++temp;
            if (temp != list.end())
            {
                current = temp;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (do_work == "prev")
        {
            if (current != list.begin())
            {
                --current;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}
