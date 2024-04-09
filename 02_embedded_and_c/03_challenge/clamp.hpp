template<typename T>
T clamp(T value, T min_value, T max_value) {
  T ret = value;
  if (value < min_value) {
    ret = min_value;
  }
  if (ret > max_value) {
    ret = max_value;
  }
  return ret;
}
