// コードを入力してください
#pragma once

// ベースケース
bool allTrue() {
  return true;
}

template<typename...Args>
bool allTrue(bool arg1, const Args&... args) {
  bool ans = (arg1 && allTrue(args...));
  return ans;
}
