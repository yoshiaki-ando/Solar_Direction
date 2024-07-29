# 太陽天頂角、方位角を計算

## 使用法
```c++:
AndoLab::solar_direction(const double Latitude, const double Longitude, const int Day_of_Year, const double Hour_UT, double *ZenithAngle_in_deg, double *Azimuth_in_deg)
```

* Latitude : 北緯が正、南緯は負
* Longitude : 東経が正、西経が負
* Day_of_year
* Hour_UT : 分以下は小数で入れる。5:32:48 -> 5 + 32.0/60 + 48.0/60/60
