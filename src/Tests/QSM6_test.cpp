void test_polytope_8(){
  std::vector<std::vector<boost::multiprecision::int128_t>> n_exact, n_lower_bound;
  count_roots("4 12 36 12 12 0 1 0 0 6 3 0 2 0 2 3 0 1 1 3 1 2 4 12 8 3 3 0 6", n_exact, n_lower_bound);
  std::vector<std::vector<boost::multiprecision::int128_t>> n_exact_expected = {{142560, 47520, 0, 0, 0, 0, 0}};
  std::vector<std::vector<boost::multiprecision::int128_t>> n_lower_bound_expected = {{0, 47520, 4752, 6336, 0, 0, 144}};
  bool test_result = comparer(n_exact, n_lower_bound, n_exact_expected, n_lower_bound_expected);
  if (test_result){
    std::cout << "Test for polytope 8: Ok\n";
  }
  assert(test_result == true);
}

void test_polytope_4(){
  std::vector<std::vector<boost::multiprecision::int128_t>> n_exact, n_lower_bound;
  count_roots("4 12 24 24 12 0 0 0 0 7 3 0 2 0 2 3 1 0 1 3 1 2 1 2 4 12 8 3 3 0 7", n_exact, n_lower_bound);
  std::vector<std::vector<boost::multiprecision::int128_t>> n_exact_expected = {{11110, 7601, 1562, 264, 0, 0, 0, 0}};
  std::vector<std::vector<boost::multiprecision::int128_t>> n_lower_bound_expected = {{0, 0, 110, 11, 66, 11, 0, 1}};
  bool test_result = comparer(n_exact, n_lower_bound, n_exact_expected, n_lower_bound_expected);
  if (test_result){
    std::cout << "Test for polytope 4: Ok\n";
  }
  assert(test_result == true);
}

void test_polytope_134(){
  std::vector<std::vector<boost::multiprecision::int128_t>> n_exact, n_lower_bound;
  count_roots("5 12 24 12 12 12 0 0 0 0 0 8 3 0 4 0 2 3 2 4 1 0 1 3 1 4 1 2 4 12 8 3 3 0 8", n_exact, n_lower_bound);
  std::vector<std::vector<boost::multiprecision::int128_t>> n_exact_expected = {{10010, 8360, 1782, 484, 55, 0, 0, 0, 0}};
  std::vector<std::vector<boost::multiprecision::int128_t>> n_lower_bound_expected = {{0, 0, 0, 0, 0, 44, 0, 0, 1}};
  bool test_result = comparer(n_exact, n_lower_bound, n_exact_expected, n_lower_bound_expected);
  if (test_result){
    std::cout << "Test for polytope 134: Ok\n";
  }
  assert(test_result == true);
}

void test_polytope_128(){
  std::vector<std::vector<boost::multiprecision::int128_t>> n_exact, n_lower_bound;
  count_roots("6 12 12 12 12 12 12 0 0 0 0 0 0 9 3 0 5 0 5 3 0 4 2 3 1 5 2 4 1 4 1 2 4 12 8 3 3 0 9", n_exact, n_lower_bound);
  std::vector<std::vector<boost::multiprecision::int128_t>> n_exact_expected = {{8910, 9240, 1650, 814, 66, 33, 0, 0, 0, 0}};
  std::vector<std::vector<boost::multiprecision::int128_t>> n_lower_bound_expected = {{0, 0, 0, 0, 0, 0, 22, 0, 0, 1}};
  bool test_result = comparer(n_exact, n_lower_bound, n_exact_expected, n_lower_bound_expected);
  if (test_result){
    std::cout << "Test for polytope 128: Ok\n";
  }
  assert(test_result == true);
}