import { defineStore } from "pinia";

export const useVerseStore = defineStore('verse', {
    // 存数据的
    state(){
        return {
            verseList: [
                'Lorem ipsum dolor sit amet consectetur adipisicing elit',
                'Eos consequatur, minima optio ipsum perferendis a aut reiciendis',
                'Rerum ipsam doloremque repudiandae dolore rem aliquam',
            ]
        }
    },
})

