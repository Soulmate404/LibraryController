cmake_minimum_required(VERSION 3.30)
project(LibraryController C)

set(CMAKE_C_STANDARD 11)


include_directories(C:\\Program\ Files\\MySQL\\MySQL\ Server\ 9.0\\include)
link_directories(C:\\Program\ Files\\MySQL\\MySQL\ Server\ 9.0\\lib)
link_libraries(libmysql)


add_executable(LibraryController Controller/code/main.c
        Mapper/head/userLoginMapper.h
        Mapper/head/bookLendMapper.h
        Mapper/head/administratorMapper.h
        Service/head/userLoginService.h
        Service/head/bookLendService.h
        Service/head/administratorService.h
        Mapper/code/userLoginMapper.c
        Mapper/code/userLoginMapper.c
        Mapper/code/userLoginMapper.c
        Mapper/code/bookLendMapper.c
        Mapper/head/mysqlPointer.h
        Mapper/code/mysqlPointer.c
)
target_link_libraries(LibraryController libmysql)
