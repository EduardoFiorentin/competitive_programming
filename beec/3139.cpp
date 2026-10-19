// Seeking New Followers

#include <bits/stdc++.h>

int i = 0; 
#define for_i(s,k) for (i = s; i < k; i++)
#define PRINT_VECTOR(v) do { std::cout << "{ "; for (const auto& item : v) { std::cout << item << " ";} std::cout << "}\n";} while(0)

#define endl "\n"

using namespace std;

int N, M, d, ceil_avg, total_subs, num_days = 0; 
double vec_sum = 0, avg;
vector<double> vec(30);
int vec_index = 0;

void update_vec(double neww) {
    vec_sum -= vec[vec_index];
    vec_sum += neww;
    vec[vec_index] = neww;
    vec_index = ++vec_index % 30;
}

int main() {

    cin >> N >> M;
    total_subs = N;

    for_i(0, 30) {
        cin >> d;
        vec[i] = d;
        vec_sum += d;
    }

    avg = ceil(vec_sum / 30);

    while ((total_subs += ceil(avg)) < M) {
        update_vec(avg);
        avg = ceil(vec_sum / 30);
        num_days++;
    }
    avg = vec_sum/30;

    cout << num_days + 1 << endl;

    return 0;
}