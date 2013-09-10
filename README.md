common
=========

Common fuctions you will use in C++,Most of them come from php.

  - urlcode
  - strtoupper && strtolower
  - split
  - str_replace
  - strip_tags

All this functions come from [http://cppfun.com] [1]


strip_tags
--------------

```cpp
std::string &strip_tags(std::string &html);
```

str_replace
----------

```cpp
std::string str_replace(const std::string& search,
                        const std::string& replace,
                        const std::string& subject);
```
split
----------
```cpp
std::vector<std::string> split(std::string& str,const char* c);
```

strtoupper && strtolower
----------
```cpp
std::string& strtoupper(std::string& s);
std::string& strtolower(std::string& s);
```

urlcode
----------
```cpp
std::string urlencode(const std::string& str);
std::string urldecode(const std::string& str);
```

License
-

MIT

*Free Software, heaven Yeah!*
*http://www.cppfun.com*


  

    
