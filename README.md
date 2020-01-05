# clog
Log function for c language!

## 目录

- [背景](背景)
- [使用](使用)
  - [参数说明](参数说明)
- [测试](测试)
- [开发者](开发者)
- [致谢](致谢)
- [License](License)


## 背景

自己写了个日志功能，感觉用着不是很舒服，重写之际发现有人写过类似的，就拿过来做了修改，并加入了自己想要的功能。

## 使用

如文件目录一样简单。只需要把`log.c`和`log.h`添加到工程中即可使用。
日志接口为`LOG(const char *file, int line, int level, int status, const char *fmt, ...)`函数。

### 参数说明

- `const char *file`: 日志文件
- `int line`: 打印日志所在行
- `int level`: 错误标号，集体如下：
  - `0`: 没有日志
  - `1`: debug级别
  - `2`: info级别
  - `3`: warning级别
  - `4`: error级别
- `int status`: 错误码
- `const char *fmt` ：可变参数（用于LOG信息）

## 测试

`test.c`中提供了测试。

## 开发者
- @[Seule-Seule](https://github.com/Seule-Seule)
- @[vbirds](https://github.com/vbirds)

## 致谢
- @[vbirds](https://github.com/vbirds)  
 > 第一版代码来自此处: [logRecord](https://github.com/vbirds/logRecord)

## License

[MIT](Licese) © Seule-Seule
