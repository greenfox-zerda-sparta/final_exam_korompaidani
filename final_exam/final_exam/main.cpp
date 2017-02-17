#include <iostream>
#include <vector>
#include <iterator>
#include <set>

using std::vector;
using std::cout;
using std::endl;

vector<int> unique_elements(vector<int> input) {
  vector<int>::iterator itv, its;
  std::set<int> temp_set;
  for (itv = input.begin(), its = input.begin(); itv != input.end(); ++itv) {
    if (temp_set.insert(*itv).second) {
      *its++ = *itv;
    }
  }
  input.erase(its, input.end());
  return input;
}

void printer(vector<int>& input) {
  vector< int >::iterator itv;
  for (itv = input.begin(); itv != input.end(); ++itv) {
    cout << *itv << std::endl;
  }
}

int main(int argc, char* argv[]) {
  
  std::vector<int> my_vector;

  my_vector.push_back(2);
  my_vector.push_back(1);
  my_vector.push_back(6);
  my_vector.push_back(1);
  my_vector.push_back(4);
  my_vector.push_back(6);
  my_vector.push_back(2);
  my_vector.push_back(1);
  my_vector.push_back(1);

  vector<int> demo = unique_elements(my_vector);

  printer(demo);

  return 0;
}

// Create a function that takes a list of numbers
// and returns a new list where all
// the duplicate values are removed