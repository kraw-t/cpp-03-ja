#include "unique_int_ptr.hpp"

// ヒープに整数を割り当てるコンストラクタ
unique_int_ptr::unique_int_ptr(int num) : ptr(new int(num)) {}

// 動的に割り当てられたメモリをクリーンアップするデストラクタ
unique_int_ptr::~unique_int_ptr() {
  delete this->ptr;
}

// 格納されたポインタを返す `get` メソッド
int* unique_int_ptr::get(void) const {
  return this->ptr;
};

// ポインタの制御を放棄する `release` メソッド
// このメソッドでは格納されたポインタを返し、クラス内でポインタを `nullptr` に設定して再び使用されないようにする
int* unique_int_ptr::release(void) {
  int* ret_ptr = this->ptr;
  this->ptr = nullptr;
  return ret_ptr;
};

// `unique_int_ptr` を簡単に間接参照して参照先の値を使用できるようにする
int& unique_int_ptr::operator*(void) {
  return *this->ptr;
}
