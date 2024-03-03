import { createApp } from "vue";
import App from './App.vue'

// 引入pinia
import {createPinia} from 'pinia'

// 创建一个应用
const app = createApp(App)

// 创建pinia
const pinia = createPinia()

// 使用pinia
app.use(pinia)

// 挂载到index.html上
app.mount('#app')