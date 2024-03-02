// 创建路由器，并向外暴露

import { createRouter, createWebHistory } from "vue-router";
import About from '@/pages/About.vue'
import Home from '@/pages/Home.vue'
import News from '@/pages/News.vue'


// 引入createRouter
const router =  createRouter({
    history: createWebHistory(),  // 路由器的工作模式
    routes: [
        {
            name: 'about',
            path: '/about',
            component: About,
        },
        {
            name: 'home',
            path: '/home',
            component: Home,
        },
        {
            name: 'news',
            path: '/news',
            component: News,
        },
    ],
    
})


export default router