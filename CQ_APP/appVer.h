#pragma once

// 应用版本
#define APP_version "1.0.0(alpha)"


// 应用顺序版本（每次发布时小工具自动将其+1）
// 必须为正整数,否则将会解析失败
#define APP_version_id 1
  





//为什么要把这两行单独出来呢,
//因为文件一旦定义了APP_version_id宏,
//这个文件就会被小工具修改,
//为了防止未知错误,
//建议把这2行单独到一个文件,
//且尽量不要定义中文

//不使用小工具的话,
//就无所谓了