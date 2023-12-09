package com.oneway.blog.service;

import com.oneway.blog.dao.pojo.SysUser;

public interface UserService {

    SysUser findUserById(Long userId);
}
