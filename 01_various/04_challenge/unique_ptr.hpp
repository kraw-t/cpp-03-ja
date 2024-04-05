#pragma once
#include "unique_int_ptr.hpp"  // class unique_int_ptrを別ファイルで作ってしまったため、テストPassさせるために追加。本来は不要

template<typename T>
class unique_ptr {
 public:
  // ヒープに整数を割り当てるコンストラクタ
  unique_ptr(T num) : ptr(new T(num)) {}

  // 動的に割り当てられたメモリをクリーンアップするデストラクタ
  ~unique_ptr() {
    delete this->ptr;
  }

  // 格納されたポインタを返す `get` メソッド
  T* get(void) const {
    return this->ptr;
  };

  // ポインタの制御を放棄する `release` メソッド
  // このメソッドでは格納されたポインタを返し、クラス内でポインタを `nullptr` に設定して再び使用されないようにする
  T* release(void) {
    T* ret_ptr = this->ptr;
    this->ptr = nullptr;
    return ret_ptr;
  };

  // *演算子のオーバーロード
  // `unique_ptr` を簡単に間接参照して参照先の値を使用できるようにする
  T& operator*(void) {
    return *this->ptr;
  }

 private:
  T* ptr;
};
