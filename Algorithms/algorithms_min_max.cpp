#include "../prototypes.h"

void min()
{
  auto val = std::min(3, 4);
  if (val == 3)
    std::cout << "min() pass" << std::endl;
  else
    std::cout << "min() fail" << std::endl;
}

void max()
{
  auto val = std::max(3, 4);
  if (val == 4)
    std::cout << "max() pass" << std::endl;
  else
    std::cout << "max() fail" << std::endl;
}

void minmax()
{
  std::pair<int, int> pair1 = std::minmax({ 7, 9, 11, 13, 15, 17, 21 });
  if (pair1.first == 7 && pair1.second == 21)
    std::cout << "minmax() pass" << std::endl;
  else
    std::cout << "minmax() fail" << std::endl;
}

void min_element()
{
  std::vector<int> vec = { 9, 7, 11, 13, 15, 21, 17 };
  auto iter = std::min_element(vec.begin(), vec.end());
  if (*iter == 7)
    std::cout << "min_element() pass" << std::endl;
  else
    std::cout << "min_element() fail" << std::endl;
}

void max_element()
{
  std::vector<int> vec = { 9, 7, 11, 13, 15, 21, 17 };
  auto iter = std::max_element(vec.begin(), vec.end());
  if (*iter == 21)
    std::cout << "min_element() pass" << std::endl;
  else
    std::cout << "min_element() fail" << std::endl;
}

void minmax_element()
{
  std::vector<int> vec = { 9, 7, 11, 13, 15, 21, 17 };
  auto pair = std::minmax_element(vec.begin(), vec.end());
  if (*pair.first == 7 && *pair.second == 21)
    std::cout << "minmax_element() pass" << std::endl;
  else
    std::cout << "minmax_element() fail" << std::endl;

}

void algorithms_min_max()
{
  min();
  max();
  minmax();
  min_element();
  max_element();
  minmax_element();
}