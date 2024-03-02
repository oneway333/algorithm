import { createApp } from "vue";
import App from './App.vue'
import router from  './router'

// 创建一个应用
const app = createApp(App)
// 使用路由器
app.use(router)

// 挂载到index.html上
app.mount('#app')