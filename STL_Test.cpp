// STL_Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "prototypes.h"

#include <iostream>
#include <sstream>
#include <fstream>
#include <istream>

void test_algorithms();

int main(int argc, char* argv[])
{
  // Algorithms
  std::cout << "--------------------------------" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std::cout << "ALGORITHMS" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std::cout << "--------------------------------" << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std::cout << "NOT MODIFYING" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  algorithms_not_modifying();   // Completed: 05/31/2015
  std::cout << "--------------------------------" << std::endl;
  std::cout << "--------------------------------" << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std::cout << "MODIFYING" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  algorithms_modifying();       // Completed: 06/06/2015

  std::cout << "--------------------------------" << std::endl;
  std::cout << "Partition" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  algorithms_partition();       // Completed: 05/31/2015

  std::cout << "--------------------------------" << std::endl;
  std::cout << "Sorting" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  algorithms_sorting();         // Completed: 06/06/2015

  std::cout << "--------------------------------" << std::endl;
  std::cout << "Binary Search" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  algorithms_binary_search();    // Completed: 05/31/2015

  std::cout << "--------------------------------" << std::endl;
  std::cout << "Merge" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  algorithms_merge();           // Completed: 05/31/2015

  std::cout << "--------------------------------" << std::endl;
  std::cout << "Heap" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  algorithms_heap();            // Completed: 05/31/2015

  std::cout << "--------------------------------" << std::endl;
  std::cout << "Min/Max" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  algorithms_min_max();         // Completed: 05/31/2015

  std::cout << "--------------------------------" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std::cout << "OTHER CONSTRUCTS" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std::cout << "--------------------------------" << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "bitset" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std_bitset();                // Completed: 06/15/2015
  std::cout << "--------------------------------" << std::endl;

  // codecvt - Deferred: 05/14/2016
  // complex - Deferred: 05/14/2016

  std::cout << "--------------------------------" << std::endl;
  std::cout << "Functional" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std_functional();            // Completed: 04/10/2016
  std::cout << "--------------------------------" << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "initializer_list" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std_initializer_list();      // Completed: 04/09/2016
  std::cout << "--------------------------------" << std::endl;

  // iterator

  // limits
  std::cout << "--------------------------------" << std::endl;
  std::cout << "limits" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std_limits();               // Completed: 05/08/2016
  std::cout << "--------------------------------" << std::endl;

  // locale - Deferred: 05/14/2016
  // memory - Deferred: 05/14/2016

  // numeric
  std::cout << "--------------------------------" << std::endl;
  std::cout << "numeric" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std_numeric();               // Completed: 05/14/2016
  std::cout << "--------------------------------" << std::endl;

  // random - Deferred: 05/14/2016

  std::cout << "--------------------------------" << std::endl;
  std::cout << "ratio" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std_ratio();                 // Completed: 04/10/2016
  std::cout << "--------------------------------" << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "regex" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std_regex();
  std::cout << "--------------------------------" << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "tuple" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std_tuple();
  std::cout << "--------------------------------" << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "typeindex" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std_typeindex();
  std::cout << "--------------------------------" << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "typeinfo" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std_typeinfo();
  std::cout << "--------------------------------" << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "type_traits" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std_type_traits();
  std::cout << "--------------------------------" << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "utility" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std_utility();
  std::cout << "--------------------------------" << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "valarray" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std_valarray();              // Completed: 05/14/2016
  std::cout << "--------------------------------" << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std::cout << "CONTAINERS" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  std::cout << "--------------------------------" << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "array" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  container_array();            // Completed: 08/09/2015
  std::cout << "--------------------------------" << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "deque" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  container_deque();
  std::cout << "--------------------------------" << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "forward_list" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  container_forward_list();
  std::cout << "--------------------------------" << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "list" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  container_list();
  std::cout << "--------------------------------" << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "map" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  container_map();
  std::cout << "--------------------------------" << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "queue" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  container_queue();
  std::cout << "--------------------------------" << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "set" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  container_set();
  std::cout << "--------------------------------" << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "stack" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  container_stack();
  std::cout << "--------------------------------" << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "unordered_map" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  container_unordered_map();
  std::cout << "--------------------------------" << std::endl;

  std::cout << "--------------------------------" << std::endl;
  std::cout << "unordered_set" << std::endl;
  std::cout << "--------------------------------" << std::endl;
  container_unordered_set();
  std::cout << "--------------------------------" << std::endl;

  char c = std::getchar();

  return 0;
}

