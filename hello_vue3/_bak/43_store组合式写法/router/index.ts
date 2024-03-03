// 创建路由器，并向外暴露

import { createRouter, createWebHashHistory, createWebHistory } from "vue-router";
import About from '@/pages/About.vue'
import Home from '@/pages/Home.vue'
import News from '@/pages/News.vue'
import Detail from "@/pages/Detail.vue";

// 引入createRouter
const router = createRouter({
    history: createWebHistory(),  // 路由器的工作模式
    // history: createWebHashHistory(),  // 路由器的工作模式
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
            children: [
                {
                    name: 'detail',
                    path: 'detail/:id/:title/:content',
                    component: Detail,
                    // 对象写法，所有的属性都会以props的形式传给MessageContent
                    // props: {a: 1,b: 'fuckyou'}

                    // 布尔值写法
                    // 若为true，就会把所有收到的params参数以props的形式传给MessageContent
                    // props: true

                    // 函数写法
                    
                    props(route) {
                        // 竟然会自动解构赋值哦？不对，这是因为params本身就是对象了，这种写法写重复了
                        // return { id: route.params.id, title: route.params.title, content: route.params.content }
                        return route.params
                    }
                },
            ]
        },
        // 重定向
        {
            path: '/',
            redirect: '/home',
        },
    ],

})


export default router