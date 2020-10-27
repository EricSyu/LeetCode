/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    let dic = {};
    for (const c of s)
        dic[c] = (c in dic ? dic[c] + 1 : 1);
    for (const d of t) {
        if (d in dic) {
            if (--dic[d] === 0)
                delete dic[d];
        }
        else
            return false;
    }
    return Object.keys(dic).length === 0
};
