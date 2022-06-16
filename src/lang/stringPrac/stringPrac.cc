#include "stringPrac.h"
#include <bits/stdc++.h>

using namespace std;

namespace lang {
void run_stringPrac() {
#pragma region indexing
  // string 인덱스 접근
  string str1 = "testString";
  cout << "str[0]: " << str1[0] << '\n';
  cout << "str.at(4): " << str1.at(4) << '\n';
#pragma endregion indexing

  cout << endl;

#pragma region front / back
  // 맨 앞
  cout << "string::front(): " << str1.front() << '\n';
  // 맨 뒤
  cout << "string::back(): " << str1.back() << '\n';
#pragma endregion front / back

  cout << endl;

#pragma region casting
  // to string from *
  const int a = 7;
  str1 = to_string(a);
  cout << "to_string(7): " << str1 << '\n';

  // from string to *
  str1 = "7";
  string str2 = "12.46";
  string str3 = "3.14";
  string str4 = "230000";

  const int str1_ = stoi(str1);
  const double str2_ = stod(str2);
  const float str3_ = stof(str3);
  const long str4_ = stol(str4);

  cout << "string to int (stoi): " << str1_ << '\n'
       << "string to double (stod): " << str2_ << '\n'
       << "string to float (stof): " << str3_ << '\n'
       << "string to long int (stol): " << str4_ << '\n';
#pragma endregion casting

  cout << endl;

#pragma region strlen
  string str22 = "testest stringdingdong";
  cout << "string::length(): " << str22.length() << '\n'
       << "string::size(): " << str22.size() << '\n'
       << "strlen(): " << strlen(str22.c_str());
  // << "std::size(): " << std::size(str22); - depuis cxx17
#pragma endregion strlen

  cout << endl;

  // empty
  cout << "string::empty(): " << str22.empty() << '\n';

  // swap
  cout << "[before swap] str1: " << str1 << ", str22: " << str22 << '\n';
  swap(str22, str1);
  cout << "[after swap] str1: " << str1 << ", str22: " << str22;

  cout << endl;

  // append
  cout << "[before append] str1: " << str1 << '\n';
  str1.append(str2).append(str3);
  cout << "[after append] str1: " << str1;
  cout << endl;

  // find
  // str 에서 문자열 str2 를 찾고
  // 찾음 -> 찾은 문자열 시작점 index 반환
  // 못찾음 -> string::npos 반환
  str1 = "tomatomatomato";
  str2 = "ma";
  str3 = "o";
  str4 = "_";
  const size_t str1_index = str1.find(str2);
  const bool str1_index_at_npos = str1_index == string::npos;

  const size_t str2_index = str1.find(str3);
  const bool str2_index_at_npos = str2_index == string::npos;

  const size_t str3_index = str1.find(str4);
  const bool str3_index_at_npos = str3_index == string::npos;

  cout << boolalpha << "'ma' starts since at " << str1_index
       << " and it is at string::npos? " << str1_index_at_npos << '\n'
       << "'o' starts since at " << str2_index << " and it is at string::npos? "
       << str2_index_at_npos << '\n'
       << "'_' starts since at " << str3_index << " and it is at string::npos? "
       << str3_index_at_npos;

  cout << endl;
}
} // namespace lang
