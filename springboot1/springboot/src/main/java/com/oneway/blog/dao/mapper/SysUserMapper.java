package com.oneway.blog.dao.mapper;

import com.oneway.blog.dao.pojo.SysUser;

public interface SysUserMapper {
    SysUser selectById(Long authorId);
}
