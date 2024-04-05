#pragma once

// sizeof...(Args)のif分をなくして、↓のベースケースを有効にするのでも良い様子
// int sum() {
//   return 0;
// }

template<typename...Args>
int sum(const int value, const Args&... args) {
  int ans {0};
  if constexpr(sizeof...(Args) > 0) {
    ans = value + sum(args...);
  } else {
    ans = value;
  }
  return ans;
}
