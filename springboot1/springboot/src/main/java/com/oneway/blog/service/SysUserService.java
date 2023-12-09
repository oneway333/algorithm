package com.oneway.blog.service;

import com.oneway.blog.dao.pojo.SysUser;

public interface SysUserService {
    SysUser findUserById(Long authorId);
}
