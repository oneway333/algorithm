package com.oneway.blog.service.impl;

import com.oneway.blog.dao.mapper.SysUserMapper;
import com.oneway.blog.dao.pojo.SysUser;
import com.oneway.blog.service.SysUserService;
import org.springframework.beans.factory.annotation.Autowired;

public class SysUserServiceImpl implements SysUserService {

    @Autowired
    private SysUserMapper sysUserMapper;

    @Override
    public SysUser findUserById(Long authorId) {
        // 根据id查询
        // 为防止sysUser为空增加一个判断
        SysUser sysUser = sysUserMapper.selectById(authorId);
        if (sysUser == null) {
            sysUser = new SysUser();
            sysUser.setNickname("fuck youself");
        }

        return sysUser;
    }
}
