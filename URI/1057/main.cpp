#define DEPURACAO 1

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

#define pii  pair<int, int>
#define vpii vector<pii>
#define vc   vector<char>
#define D()  cout << "ok" << endl


struct Node {
    pii a;
    pii b;
    pii c;

    Node(pii a, pii b, pii c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    Node toUp() {
        return Node(pii(a.first - 1, a.second), pii(b.first - 1, b.second), pii(c.first - 1, c.second));
    }

    Node toRight() {
        return Node(pii(a.first, a.second + 1), pii(b.first, b.second + 1), pii(c.first, c.second + 1));
    }  

    Node toDown() {
        return Node(pii(a.first + 1, a.second), pii(b.first + 1, b.second), pii(c.first + 1, c.second));
    }

    Node toLeft() {
        return Node(pii(a.first, a.second - 1), pii(b.first, b.second - 1), pii(c.first, c.second - 1));
    }

};

void checkInputPositions(vector<vc>& table, vector<pii>& pos, int i, int j) {
    if(table[i][j] == 'A' || table[i][j] == 'B' || table[i][j] == 'C') {
        pos.push_back(pii(i, j));
        D();
    }
}

void getPersonPositions(const vector<vc> table, vector<pii>& positions) {

    for(int i = 0; i < table.size(); i++) {
        for(int j = 0; j < table[i].size(); j++) {
            if(table[i][j] == 'A' || table[i][j] == 'B' || table[i][j] == 'C') {
                positions.push_back(pii(i, j));
                cout << i << " " << j << endl;
            }
        }
    }

}

vector<vc> createTable(int N) {
    vector<vc> table(N, vc(N, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> table[i][j];
        }
    }

    return table;
}

string solve(vector<vc>& table) {
    vector<pii> positions;
    
    getPersonPositions(table, positions);
    
    Node initialNode(positions[0], positions[1], positions[2]);
    
    Node upNode    = initialNode.toUp();
    Node rightNode = initialNode.toRight();
    Node downNode  = initialNode.toDown();
    Node leftNode  = initialNode.toLeft();

    return "";
}

void run(const int& tableSize, const int& caseTest) {
    auto mTable = createTable(tableSize);
    auto is = solve(mTable);

    cout << "Case " << caseTest << ": " << is << endl;
}

int main() {

    int T, N, countIter;
#ifdef DEPURACAO
    
    //std::ifstream in("test00.in");   
    //ifstream cin("test00.in");
    
    //std::streambuf *cinbuf = std::cin.rdbuf(); //save old buf
    //std::cin.rdbuf(in.rdbuf()); //redirect std::cin to in.txt! 
#endif
    cin >> T;

    countIter = 1;
    while(countIter <= T) {
        cin >> N;
        run(N, countIter);
        countIter++;
    }

    return 0;
}
