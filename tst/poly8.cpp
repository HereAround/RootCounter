// ####################
// 1. Include libraries
// ####################

#include "include.cpp"


// ####################
// 2. Execute tests
// ####################

int main(int argc, char* argv[]){
  std::vector<std::vector<boost::multiprecision::int128_t>> n_exact, n_lower_bound;
  std::vector<std::vector<std::vector<int>>> unsorted_setups;
  count_roots("4 12 36 12 12 0 1 0 0 6 3 0 2 0 2 3 0 1 1 3 1 2 4 12 8 2 3 0 6", argv[0], true, n_exact, n_lower_bound, unsorted_setups);
  std::vector<std::vector<boost::multiprecision::int128_t>> n_exact_expected = {{0, 0, 0, 0, 0, 0, 0}, {142560, 47520, 0, 0, 0, 0, 0}};
  std::vector<std::vector<boost::multiprecision::int128_t>> n_lower_bound_expected = {{0, 0, 0, 0, 0, 0, 0}, {0, 47520, 4752, 6336, 0, 0, 144}};
  assert(sum(n_exact) + sum(n_lower_bound) == sum(n_exact_expected) + sum(n_lower_bound_expected) && "Test for polytope 8 failed");
  assert(n_exact == n_exact_expected && "Test for polytope 8 failed");
  assert(n_lower_bound == n_lower_bound_expected && "Test for polytope 8 failed");
}